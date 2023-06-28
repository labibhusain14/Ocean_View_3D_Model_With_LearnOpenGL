#include <glad/glad.h>
#include <GLFW/glfw3.h>
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#include <windows.h>
#include <mmsystem.h>

// Header Koordinat
#include "Koordinat_pewarnaan/balon_udara.cpp"
#include "Koordinat_pewarnaan/laut_atas.cpp"
#include "Koordinat_pewarnaan/bulan.cpp"
#include "Koordinat_pewarnaan/awan_atas_jembatan.cpp"
#include "Koordinat_pewarnaan/awan_atas_pulau_kecil.cpp"
#include "Koordinat_pewarnaan/awan_deket_bulan.cpp"
#include "Koordinat_pewarnaan/bintang_laut.cpp"
#include "Koordinat_pewarnaan/campfire.cpp"
#include "Koordinat_pewarnaan/coral.cpp"
#include "Koordinat_pewarnaan/dori.cpp"
#include "Koordinat_pewarnaan/elang.cpp"
#include "Koordinat_pewarnaan/gua.cpp"
#include "Koordinat_pewarnaan/gurita.cpp"
#include "Koordinat_pewarnaan/hiu.cpp"
#include "Koordinat_pewarnaan/ikan_biru.cpp"
#include "Koordinat_pewarnaan/ikan_krem.cpp"
#include "Koordinat_pewarnaan/kawanan_burung.cpp"
#include "Koordinat_pewarnaan/kerang_hijau.cpp"
#include "Koordinat_pewarnaan/kerang_oreo.cpp"
#include "Koordinat_pewarnaan/laut_depan.cpp"
#include "Koordinat_pewarnaan/laut_samping.cpp"
#include "Koordinat_pewarnaan/nemo.cpp"
#include "Koordinat_pewarnaan/pasir.cpp"
#include "Koordinat_pewarnaan/perahu.cpp"
#include "Koordinat_pewarnaan/pohon.cpp"
#include "Koordinat_pewarnaan/pulau.cpp"
#include "Koordinat_pewarnaan/rumah_bob.cpp"
#include "Koordinat_pewarnaan/rumah_patrick.cpp"
#include "Koordinat_pewarnaan/rumah_squidward.cpp"
#include "Koordinat_pewarnaan/rumput.cpp"
#include "Koordinat_pewarnaan/sailboat.cpp"
#include "Koordinat_pewarnaan/spongebob.cpp"
#include "Koordinat_pewarnaan/menara.cpp"
#include "Koordinat_pewarnaan/ubur_ubur.cpp"
#include "Koordinat_pewarnaan/batu_bawah_laut.cpp"
#include "Koordinat_pewarnaan/hujan.cpp"
#include "Koordinat_pewarnaan/lampu_menara.cpp"
#include "Koordinat_pewarnaan/cahaya_menara.cpp"
#include "Koordinat_pewarnaan/api.cpp"
#include "Koordinat_pewarnaan/percikanApi.cpp"

// Lighting
// #include "Koordinat_pewarnaan/lightingKoordinat/bulan.cpp"
// #include "Koordinat_pewarnaan/lightingKoordinat/land.cpp"
// #include "Koordinat_pewarnaan/lightingKoordinat/lautAtas.cpp"

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "shader_m.h"
#include "camera.h"
#include <iostream>

unsigned int VBO[50], VAO[50];
int width, height, nrChannels;

void VAE()
{

    for (unsigned int i = 0; i < 40; i++)
    {
        glGenVertexArrays(1, &VAO[i]);
        glGenBuffers(1, &VBO[i]);
        glBindVertexArray(VAO[i]);

        // Balon Udara
        if (i == 0)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(balon), balon, GL_STATIC_DRAW);
        }
        // Laut Atas
        else if (i == 1)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(laut_atas), laut_atas, GL_STATIC_DRAW);
        }
        // Bulan
        else if (i == 2)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[2]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(bulan), bulan, GL_STATIC_DRAW);
        }
        // Awan Atas Jembatan
        else if (i == 3)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(awan_atas_jembatan), awan_atas_jembatan, GL_STATIC_DRAW);
        }
        // Bintang
        else if (i == 4)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[4]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(bintang), bintang, GL_STATIC_DRAW);
        }
        // Campfire
        else if (i == 5)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[5]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(campfire), campfire, GL_STATIC_DRAW);
        }
        // Coral
        else if (i == 6)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[6]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(coral), coral, GL_STATIC_DRAW);
        }
        // Dori
        else if (i == 7)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[7]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(dori), dori, GL_STATIC_DRAW);
        }
        // Elang
        else if (i == 8)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[8]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(elang), elang, GL_STATIC_DRAW);
        }
        // Gua
        else if (i == 9)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[9]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(gua), gua, GL_STATIC_DRAW);
        }
        // Gurita
        else if (i == 10)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[10]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(gurita), gurita, GL_STATIC_DRAW);
        }
        // Hiu
        else if (i == 11)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[11]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(hiu), hiu, GL_STATIC_DRAW);
        }
        // Ikan Biru
        else if (i == 12)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[12]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(ikan_biru), ikan_biru, GL_STATIC_DRAW);
        }
        // Ikan Krem
        else if (i == 13)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[13]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(ikan_krem), ikan_krem, GL_STATIC_DRAW);
        }
        // Kawanan Burung
        else if (i == 14)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[14]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(kawanan_burung), kawanan_burung, GL_STATIC_DRAW);
        }
        // Kerang Hijau
        else if (i == 15)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[15]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(kerang_hijau), kerang_hijau, GL_STATIC_DRAW);
        }
        // Kerang Oreo
        else if (i == 16)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[16]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(kerang_oreo), kerang_oreo, GL_STATIC_DRAW);
        }
        // Laut Depan
        else if (i == 17)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[17]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(laut_depan), laut_depan, GL_STATIC_DRAW);
        }
        // Laut Samping
        else if (i == 18)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[18]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(laut_samping), laut_samping, GL_STATIC_DRAW);
        }
        // Nemo
        else if (i == 19)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[19]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(nemo), nemo, GL_STATIC_DRAW);
        }
        // Pasir
        else if (i == 20)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[20]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(pasir), pasir, GL_STATIC_DRAW);
        }
        // Perahu
        else if (i == 21)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[21]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(perahu), perahu, GL_STATIC_DRAW);
        }
        // Pohon
        else if (i == 22)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[22]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(pohon), pohon, GL_STATIC_DRAW);
        }
        // Pulau
        else if (i == 23)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[23]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(pulau), pulau, GL_STATIC_DRAW);
        }
        // Rumah Spongebob
        else if (i == 24)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[24]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(rumah_bob), rumah_bob, GL_STATIC_DRAW);
        }
        // Rumah Patrick
        else if (i == 25)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[25]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(rumah_patrick), rumah_patrick, GL_STATIC_DRAW);
        }
        // Rumah Squidward
        else if (i == 26)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[26]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(rumah_squidward), rumah_squidward, GL_STATIC_DRAW);
        }
        // Rumput
        else if (i == 27)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[27]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(rumput), rumput, GL_STATIC_DRAW);
        }
        // Spongebob
        else if (i == 28)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[28]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(spongebob), spongebob, GL_STATIC_DRAW);
        }
        // Ubur_ubur
        else if (i == 29)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[29]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(ubur), ubur, GL_STATIC_DRAW);
        }
        // Menara
        else if (i == 30)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[30]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(menara), menara, GL_STATIC_DRAW);
        }
        // Sailboat
        else if (i == 31)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[31]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(sailboat), sailboat, GL_STATIC_DRAW);
        }
        // Awan Atas Pulau Kecil
        else if (i == 32)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[32]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(awan_atas_pulau_kecil), awan_atas_pulau_kecil, GL_STATIC_DRAW);
        }
        // Awan Deket Bulan
        else if (i == 33)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[33]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(awan_deket_bulan), awan_deket_bulan, GL_STATIC_DRAW);
        }
        // Batu Bawah Laut
        else if (i == 34)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[34]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(batu_bawah_laut), batu_bawah_laut, GL_STATIC_DRAW);
        }
        // Hujan
        else if (i == 35)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[35]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(hujan), hujan, GL_STATIC_DRAW);
        }
        // Lampu Menara
        else if (i == 36)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[36]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(lampu_menara), lampu_menara, GL_STATIC_DRAW);
        }
        // Cahaya Menara
        else if (i == 37)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[37]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(cahaya_menara), cahaya_menara, GL_STATIC_DRAW);
        }
        // Api
        else if (i == 38)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[38]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(api), api, GL_STATIC_DRAW);
        }
        // Percikan Api
        else if (i == 39)
        {
            glBindBuffer(GL_ARRAY_BUFFER, VBO[39]);
            glBufferData(GL_ARRAY_BUFFER, sizeof(percikanApi), percikanApi, GL_STATIC_DRAW);
        }

        // position attribute
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void *)0);
        glEnableVertexAttribArray(0);
        // color attribute
        glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void *)(3 * sizeof(float)));
        glEnableVertexAttribArray(1);
    }
}

// void light(){
//     for (int j = 0; j < 3; j++)
//     {
//         glGenVertexArrays(1, &lightCubeVAO[j]);
//         glGenBuffers(1, &lightCubeVBO[j]);
//         glBindVertexArray(lightCubeVAO[j]);

//         if (j == 0)
//         {
//             glBindBuffer(GL_ARRAY_BUFFER, lightCubeVBO[0]);
//             glBufferData(GL_ARRAY_BUFFER, sizeof(lautAtasLighting), lautAtasLighting, GL_STATIC_DRAW);
//         }
//         else if (j == 1)
//         {
//             glBindBuffer(GL_ARRAY_BUFFER, lightCubeVBO[1]);
//             glBufferData(GL_ARRAY_BUFFER, sizeof(landLighting), landLighting, GL_STATIC_DRAW);
//         }
//         else if (j == 2)
//         {
//             glBindBuffer(GL_ARRAY_BUFFER, lightCubeVBO[2]);
//             glBufferData(GL_ARRAY_BUFFER, sizeof(bulanLighting), bulanLighting, GL_STATIC_DRAW);
//         }
//         // position attribute
//         glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void *)0);
//         glEnableVertexAttribArray(0);
//         // color attribute
//         glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void *)(3 * sizeof(float)));
//         glEnableVertexAttribArray(1);
//         // texture attribut
//         glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void *)(6 * sizeof(float)));
//         glEnableVertexAttribArray(2);
//     }

// }
