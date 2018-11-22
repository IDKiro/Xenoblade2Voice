export default {

  addChara (state, cid) {
    if (state.selectedChara.length < 3) {
      state.selectedChara.push(state.charactor[cid])
    }
  },

  removeSelectedChara (state, cid) {
    let ret = []
    for (let chara of state.selectedChara) {
      if (chara.cid !== cid) {
        ret.push(chara)
      }
    }
    state.selectedChara = ret
  },

  setPattern (state, pattern) {
    state.selectedPattern = pattern
  },

  setLanguage (state, language) {
    state.language = language
  }
}
