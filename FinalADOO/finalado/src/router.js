import Vue from 'vue';
import Router from 'vue-router';
import Home from '@/views/Home.vue';
import Login from '@/views/Login.vue';
// import Signup from '@/views/Signup.vue';
// import Profile from '@/pages/Profile.vue';
import About from '@/pages/About.vue';

Vue.use(Router);

export default new Router({
    mode: 'history',
    routes: [{
            path: '',
            name: 'home',
            component: Home
        },
        {
            path: 'about',
            name: 'about',
            component: About
        },
        {
            path: 'Login',
            name: 'login',
            component: Login
        }
    ]
});