import Vue from 'vue';
import Router from 'vue-router';
import App from '@/App.vue';
Vue.use(Router);
export default new Router({
    mode: 'history',
    base: process.env.BASE_URL,
    routes: [{
            path: '/',
            name: 'app',
            component: App
        },
        {
            path: '/about',
            name: 'about',
            component: () =>
                import ('./views/About.vue')
        },
        {
            path: '/menu',
            name: 'menu',
            component: () =>
                import ('./views/Menu.vue')
        },
        {
            path: '/sign-in',
            name: 'signin',
            component: () =>
                import ('./views/Signin.vue')
        },
        {
            path: '/join',
            name: 'join',
            component: () =>
                import ('./views/Join.vue')
        }
    ]
});