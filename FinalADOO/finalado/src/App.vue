<template>
  <v-app>
    <ANavBar />

    <v-content>
      <router-view />
    </v-content>

    <AFooter />
  </v-app>
</template>

<!-- The core Firebase JS SDK is always required and must be listed first -->
<script src="/__/firebase/7.5.0/firebase-app.js"></script>
<!-- TODO: Add SDKs for Firebase products that you want to use
     https://firebase.google.com/docs/web/setup#available-libraries -->
<script src="/__/firebase/7.5.0/firebase-analytics.js"></script>
<!-- Initialize Firebase -->
<script src="/__/firebase/init.js"></script>
<script>
import ANavBar from "@/components/ANavBar.vue";
import AFooter from "@/components/AFooter.vue";

export default {
  name: "App",

  components: {
    ANavBar,
    AFooter
  },

  data: () => ({
    //
  })
};
</script>
