import Vue from 'vue'
import Router from 'vue-router'
import Voice from '@/components/Voice'

Vue.use(Router)

export default new Router({
  routes: [
    {
      path: '/',
      name: 'Voice',
      component: Voice
    }
  ]
})
