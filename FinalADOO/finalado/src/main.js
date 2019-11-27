import Vue from 'vue';
import App from './App.vue';
import vuetify from './plugins/vuetify';
import VueRouter from 'vue-router';

Vue.config.productionTip = false;
Vue.use(VueRouter)

import Home from './views/Home.vue'

const routers = [{
    name: 'home',
    path: '',
    component: Home
}]

const router = new VueRouter({ mode: 'history', router: routers })

new Vue({
    vuetify,
    render: h => h(App),
    router
}).$mount('#app');