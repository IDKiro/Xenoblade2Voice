<template>
  <div class="scroll">
    <ul style="text-align: left;">
      <li v-for="chara in charaList" :key="chara.cid">
        <Button type="text" ghost :name="chara.cid" @click="selectChara" >
          <img :src="chara.img" :name="chara.cid"/>
        </Button>
      </li>
    </ul>
  </div>
</template>

<script>
import { mapGetters, mapMutations } from 'vuex'

export default {
  computed: {
    ...mapGetters(['charaList'])
  },
  methods: {
    ...mapMutations(['addChara', 'setPattern']),

    selectChara (event) {
      let cid = event.target.name
      if (cid) {
        this.addChara(cid)
      }
    }
  }
}
</script>

<style lang="scss">
.scroll {
  height: 100%;
  overflow: auto;
  img {
    width: 90px;
    box-shadow:2px 2px 5px #333333;
  }
  .card-body {
    padding: 0.5rem;
    text-align: center;
    overflow: hidden;
    font-size: 12px;
  }
  ul {
    list-style-type: none;
    padding: 0;
  }
  li {
    display: inline-block;
  }
  .ivu-btn {
    padding: 0;
    margin: 4px;
  }
}
</style>
