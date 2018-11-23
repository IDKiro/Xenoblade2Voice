<template>
  <Layout style="max-width: 1000px; margin: 0 auto;">
    <Sider class="sidebar" width="411" style="background: #fff">
      <vue-scroll>
        <CharacterSelector/>
      </vue-scroll>
    </Sider>
    <Content class="main">
      <player class="player"/>
      <SlideXLeftTransition>
        <div class="char-wrapper" v-show="ifShow">
          <vue-scroll>
            <CharacterSelector/>
          </vue-scroll>
        </div>
      </SlideXLeftTransition>
      <FadeTransition>
        <div class="char-mask" v-show="ifShow" @click="hideChar"></div>
      </FadeTransition>
      <div class="select-wrapper">
        <div class="selector">
          <Button class="left" size="large" @click="showChar"><Icon type="ios-list" size="20" style="margin-top: -2.5px"/>选择角色</Button>
          <switch-language class="right"/>
        </div>
        <selected-box :button-size="90"/>
      </div>
      <talk-order class="talk-list" :height="tableHeight"/>
    </Content>
  </Layout>
</template>

<script>
import CharacterSelector from '@/components/CharacterSelector.vue'
import SelectedBox from '@/components/SelectedBox.vue'
import TalkOrder from '@/components/TalkOrder.vue'
import SwitchLanguage from '@/components/SwitchLanguage.vue'
import Player from '@/components/Player.vue'
import {SlideXLeftTransition, FadeTransition} from 'vue2-transitions'

export default {
  name: 'voice',
  data () {
    return {
      tableHeight: 401,
      ifShow: false
    }
  },
  components: {
    CharacterSelector,
    SelectedBox,
    TalkOrder,
    Player,
    SwitchLanguage,
    SlideXLeftTransition,
    FadeTransition
  },
  methods: {
    showChar () {
      this.ifShow = true
    },
    hideChar () {
      this.ifShow = false
    },
    adjustH () {
      this.tableHeight = document.documentElement.clientHeight - (document.querySelector('.talk-list').offsetTop - document.querySelector('.player').offsetTop) - 10
    }
  },
  mounted () {
    this.adjustH()
  },
  computed: {
    playListLength () {
      return this.$store.getters.playList.length
    }
  },
  watch: {
    playListLength () {
      this.$nextTick(() => {
        this.adjustH()
      })
    }
  }
}
</script>

<style lang="scss">
  .sidebar {
    height: 100vh;
    margin-right: 5px;
    box-shadow: 2px 0 2px rgba(0, 0, 0, .15);
  }
  .main {
    .char-wrapper {
      position: absolute;
      top: 0;
      left: 0;
      width: 311px;
      height: 100%;
      z-index: 102;
      background: #fff;
      box-shadow: 8px 0 8px rgba(0, 0, 0, .15);
    }
    .char-mask {
      position: absolute;
      top: 0;
      left: 0;
      height: 100%;
      width: 100%;
      z-index: 101;
      display: flex;
      background: rgba(51, 51, 51, .8);
    }
    .select-wrapper {
      background: #fff;
      box-shadow: 2px 2px 2px rgba(0, 0, 0, .15);
      margin: 10px 5px 5px 5px;
      padding: 10px;
      .selector {
        display: flex;
        .left {
          display: none;
        }
        .right {
          display: flex;
          flex: 1;
          justify-content: flex-end;
        }
      }
    }
    .talk-list {
      margin: 10px 5px 5px 5px;
      box-shadow: 2px 0 2px rgba(0, 0, 0, .15);
    }
  }
  @media screen and (max-width: 780px) {
    .sidebar {
      display: none;
    }
    .main .select-wrapper .selector .left {
      display: flex;
    }
  }
</style>
