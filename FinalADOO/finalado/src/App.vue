<template>
  <v-app>
    <AToolbar />
    <AParallax> </AParallax>
    <VideoBg
      :sources="['@/assets/videos/vid1.mp4']"
      img="@/assets/pictures/bg-2.jpg"
    ></VideoBg>
  </v-app>
</template>

<script>
import AToolbar from "@/components/AToolbar.vue";
import AParallax from "@/components/AParallax.vue";
import VideoBg from "vue-videobg";

export default {
  name: "App",

  components: {
    AToolbar,
    AParallax,
    VideoBg
  },

  data: () => ({
    //
  })
};
</script>
