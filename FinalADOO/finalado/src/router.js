import Vue from 'vue';
import Router from 'vue-router';
import App from '@/App.vue';
import Home from '@/views/Home.vue';
import Login from '@/views/Login.vue';
import Signup from '@/views/Signup.vue';
import Profile from '@/pages/Profile.vue';
import About from '@/pages/About.vue';

Vue.use(Router);
export default new Router({
    mode: 'history',
    base: process.env.BASE_URL,
    routes: [{
        path: '',
        component: App,
        children: [{
                path: 'login',
                component: Login
            },
            {
                path: 'about',
                component: About
            }
        ]
    }]
});