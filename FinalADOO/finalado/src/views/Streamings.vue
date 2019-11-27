<template>
  <div class="streamings">
    <v-app>
      <v-card class="mx-auto mt-2" max-width="auto" tile id="videos_list">
        <v-list-item v-for="video in videos" :key="video">
          <v-list-item-content>
            <v-list-item-title>{{ video.title }}</v-list-item-title>
            <v-list-item-subtitle>{{ video.text }}</v-list-item-subtitle>
            <v-list-item-subtitle>{{ video.url }}</v-list-item-subtitle>
            <iframe
              src="https://player.twitch.tv/?video=v367046564&autoplay=true"
              frameborder="0"
            ></iframe>
          </v-list-item-content>
        </v-list-item>
      </v-card>
    </v-app>
  </div>
</template>

<script>
export default {
  data() {
    return {
      videos: [
        {
          title: "vid1",
          text: "text1",
          url: "https://player.twitch.tv/?video=v367046564&autoplay=true"
        },
        {
          title: "vid2",
          text: "text2",
          url: "https://player.twitch.tv/?video=v367046564&autoplay=true"
        },
        {
          title: "vid3",
          text: "text3",
          url: "https://player.twitch.tv/?video=v367046564&autoplay=true"
        },
        {
          title: "vid4",
          text: "text4",
          url: "https://player.twitch.tv/?video=v367046564&autoplay=true"
        },
        {
          title: "vid5",
          text: "text5",
          url: "https://player.twitch.tv/?video=v367046564&autoplay=true"
        }
      ]
    };
  }
};
</script>

<style></style>
