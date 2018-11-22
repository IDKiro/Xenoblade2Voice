<template>
  <div>
    <RadioGroup v-model="language" type="button" size="large">
      <Radio label="CN">CN 简体中文</Radio>
      <Radio label="JP">JP 日本語</Radio>
    </RadioGroup>
  </div>
</template>

<script>
import { mapMutations } from 'vuex'

export default {
  computed: {
    language: {
      get () {
        return this.$store.state.language
      },
      set (value) {
        this.setLanguage(value)
      }
    }
  },
  methods: mapMutations(['setLanguage'])
}
</script>
