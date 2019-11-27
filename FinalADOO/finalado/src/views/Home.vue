<template>
  <div class="home">
    <h1>Hola</h1>
    <ANavBar />
    <AParallax />
    <CParallax />
    <BParallax />
    <AFooter />
  </div>
</template>

<script>
import ANavBar from "../components/ANavBar.vue";
import AParallax from "../components/AParallax.vue";
import AFooter from "../components/AFooter.vue";
import BParallax from "../components/BParallax.vue";
import CParallax from "../components/CParallax.vue";
export default {
  components: {
    ANavBar,
    AParallax,
    BParallax,
    CParallax,
    AFooter
  }
};
</script>

<style></style>
