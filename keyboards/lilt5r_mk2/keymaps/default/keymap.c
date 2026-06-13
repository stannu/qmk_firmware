#include QMK_KEYBOARD_H

// キーマップの設定（レイヤー0）
// 左から物理的な並び順：SW1, SW2, SW3, SW4, SW5, SW6(エンコーダ中央プッシュ)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_1, KC_2, KC_3, KC_4, KC_5, KC_MUTE
    )
};

// ロータリーエンコーダを回したときの挙動
// 左回し（CCW）で音量ダウン、右回し（CW）で音量アップ
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif