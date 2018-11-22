<template>
  <div>
    <div class="selected">
      <Button @click="remove" v-for="i in box" :key="i" :cid="charaBoxList[i].cid" :style="{ width: buttonSize + 'px', height: buttonSize + 'px'}">
        <img :src="charaBoxList[i].img" :cid="charaBoxList[i].cid" :style="{ width: buttonSize + 'px'}" />
      </Button>
    </div>
  </div>
</template>

<script>
import { mapGetters, mapMutations } from 'vuex'

export default {
  props: [
    'buttonSize'
  ],
  data () {
    return {
      box: [0, 1, 2]
    }
  },
  computed: mapGetters(['charaBoxList']),
  methods: {
    ...mapMutations([
      'removeSelectedChara'
    ]),
    remove (event) {
      let cid = event.target.getAttribute('cid')
      if (cid) {
        this.removeSelectedChara(cid)
      }
    }
  }
}
</script>

<style scoped>
  .selected {
    padding: 10px 0px;
    overflow: hidden;
    text-align: center;
    display: flex;
    justify-content: space-between;
  }
  button {
    padding: 0;
    border-radius: 0;
    box-sizing: content-box;
  }
</style>
