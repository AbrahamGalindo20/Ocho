import Vue from 'vue';
import Router from 'vue-router';
import App from '@/App.vue';
import Login from '@/views/Login.vue';
import Signup from '@/views/Signup.vue';
import Profile from '@/views/Profile.vue';
import About from '@/views/About.vue';

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
            path: '/login',
            name: 'login',
            component: Login
        },
        {
            path: '/signup',
            name: 'signup',
            component: Signup
        },
        {
            path: '/about',
            name: 'about',
            component: About
        },
        {
            path: '/profile',
            name: 'profile',
            component: Profile
        }
    ]
});