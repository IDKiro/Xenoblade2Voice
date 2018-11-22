// The Vue build version to load with the `import` command
// (runtime-only or standalone) has been set in webpack.base.conf with an alias.
import Vue from 'vue'
import iView from 'iview'
import vuescroll from 'vuescroll'
import App from './App'
import store from './store'
import router from './router'
import 'iview/dist/styles/iview.css'
import 'vuescroll/dist/vuescroll.css'

Vue.config.productionTip = false
Vue.use(iView)
Vue.use(vuescroll)

Vue.prototype.$vuescrollConfig = {
  bar: {
    background: '#ccc'
  }
}

/* eslint-disable no-new */
new Vue({
  el: '#app',
  router,
  store,
  components: { App },
  template: '<App/>'
})
