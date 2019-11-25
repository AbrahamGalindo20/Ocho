<template>
  <v-app>
    <AToolbar />
    <AParallax dark> </AParallax>
  </v-app>
</template>

<script>
import AToolbar from "@/components/AToolbar.vue";
import AParallax from "@/components/AParallax.vue";
export default {
  name: "App",

  components: {
    AToolbar,
    AParallax
  },

  data: () => ({
    //
  })
};
</script>
