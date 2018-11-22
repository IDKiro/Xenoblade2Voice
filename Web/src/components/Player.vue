<template>
  <aplayer :music="playList[0]" :list="playList" repeat="none" ref="player"/>
</template>

<script>
import Aplayer from 'vue-aplayer'

export default {
  watch: {
    playList () {
      this.$refs.player.thenPlay()
    }
  },
  computed: {
    playList () {
      return this.$store.getters.playList
    },
    selectedPattern () {
      return this.$store.state.selectedPattern
    }
  },
  components: {
    Aplayer
  }
}
</script>
