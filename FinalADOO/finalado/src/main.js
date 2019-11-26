import Vue from 'vue';
import App from './App.vue';
import vuetify from './plugins/vuetify';
import VueRouter from 'vue-router';

Vue.config.productionTip = false;
Vue.use(VueRouter)

import About from './pages/About.vue'

const routers = [{
    name: 'about',
    path: '/about',
    component: About
}]

const router = new VueRouter({ mode: 'history', router: routers })

new Vue({
    vuetify,
    render: h => h(App),
    router
}).$mount('#app');