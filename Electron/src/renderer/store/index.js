import Vue from 'vue'
import Vuex from 'vuex'
import mutations from './mutations'
import getters from './getters'

import Charactor from '../assets/json/jsonChara.json'
import Dialogue from '../assets/json/jsonDialogue.json'

Vue.use(Vuex)

export default new Vuex.Store({
  state: {
    charactor: parseCharactor(Charactor),
    dialogue: Dialogue,
    selectedChara: [],
    selectedPattern: Object.keys(Dialogue)[0],
    selectedDialogue: null,
    language: 'CN'
  },
  getters,
  mutations
})

function parseCharactor (charactor) {
  for (let cid in charactor) {
    charactor[cid]['cid'] = cid
    charactor[cid]['img'] = require('../assets/image/' + cid + '.png')
  }
  return charactor
}
