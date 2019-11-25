<template>
  <v-app>
    <AToolbar />
    <AParallax />
    <CParallax />
    <BParallax />
    <AFooter />
  </v-app>
</template>

<script>
import AToolbar from "@/components/AToolbar.vue";
import AParallax from "@/components/AParallax.vue";
import AFooter from "@/components/AFooter.vue";
import BParallax from "@/components/BParallax.vue";
import CParallax from "@/components/CParallax.vue";

export default {
  name: "App",

  components: {
    AToolbar,
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
