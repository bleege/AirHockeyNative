#include "../../common/game.h"
#include <jni.h>
/* Header for class com_bradleege_airhockeynative_GameLibJNIWrapper */

/*
 * Class:     com_bradleege_airhockeynative_GameLibJNIWrapper
 * Method:    on_surface_created
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_bradleege_airhockeynative_GameLibJNIWrapper_on_1surface_1created(JNIEnv *, jclass);

/*
 * Class:     com_bradleege_airhockeynative_GameLibJNIWrapper
 * Method:    on_surface_changed
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_bradleege_airhockeynative_GameLibJNIWrapper_on_1surface_1changed(JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_bradleege_airhockeynative_GameLibJNIWrapper
 * Method:    on_draw_frame
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_bradleege_airhockeynative_GameLibJNIWrapper_on_1draw_1frame(JNIEnv *, jclass);
