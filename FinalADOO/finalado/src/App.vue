<template>
  <v-app>
    <AToolbar />
    <AParallax />
    <CParallax />
    <BParallax />
    <AFooter />
    <Login />
    <Signup />
  </v-app>
</template>

<script>
import AToolbar from "@/components/AToolbar.vue";
import AParallax from "@/components/AParallax.vue";
import AFooter from "@/components/AFooter.vue";
import BParallax from "@/components/BParallax.vue";
import CParallax from "@/components/CParallax.vue";
import Login from "@/components/Login.vue";
import Signup from "@/components/Signup.vue";
// import Profile from "@/components/Profile.vue";

export default {
  name: "App",

  components: {
    AToolbar,
    AParallax,
    AFooter,
    BParallax,
    CParallax,
    //  TODO: Comentar o borrar al terminar presentación
    Login,
    Signup
    // Profile
  },

  data: () => ({
    //
  })
};
</script>
