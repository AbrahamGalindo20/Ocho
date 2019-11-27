<template>
  <v-app>
    <ANavBar />

    <v-content>
      <router-view />
      <AParallax />
      <CParallax />
      <BParallax />
    </v-content>

    <AFooter />
  </v-app>
</template>

<script>
import ANavBar from "@/components/ANavBar.vue";
import AParallax from "@/components/AParallax.vue";
import AFooter from "@/components/AFooter.vue";
import BParallax from "@/components/BParallax.vue";
import CParallax from "@/components/CParallax.vue";

export default {
  name: "App",

  components: {
    ANavBar,
    AParallax,
    AFooter,
    BParallax,
    CParallax
  },

  data: () => ({
    //
  })
};
</script>
