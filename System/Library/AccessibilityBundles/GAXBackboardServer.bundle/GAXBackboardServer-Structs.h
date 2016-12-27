/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:48:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct {
	unsigned voiceOverEnabled : 1;
	unsigned zoomEnabled : 1;
	unsigned invertColorsEnabled : 1;
	unsigned grayscaleEnabled : 1;
	unsigned assistiveTouchEnabled : 1;
	unsigned switchControlEnabled : 1;
	unsigned speakSelectionEnabled : 1;
	unsigned monoAudioEnabled : 1;
	unsigned guidedAccessEnabled : 1;
	unsigned reduceWhitePointEnabled : 1;
	unsigned voiceOverTripleClickOptionIncluded : 1;
	unsigned zoomTripleClickOptionIncluded : 1;
	unsigned invertColorsTripleClickOptionIncluded : 1;
	unsigned grayscaleTripleClickOptionIncluded : 1;
	unsigned assistiveTouchTripleClickOptionIncluded : 1;
	unsigned switchControlTripleClickOptionIncluded : 1;
	unsigned guidedAccessTripleClickOptionIncluded : 1;
	unsigned hearingAidsTripleClickOptionIncluded : 1;
	unsigned whitePointTripleClickOptionIncluded : 1;
} SCD_Struct_GA0;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	unsigned field6;
	unsigned field7 : 1;
	unsigned field8 : 1;
	unsigned field9 : 1;
	unsigned field10 : 1;
	unsigned field11 : 1;
	unsigned field12 : 1;
	unsigned field13 : 1;
	unsigned field14 : 1;
	unsigned field15 : 1;
	unsigned field16 : 1;
	unsigned field17 : 1;
	unsigned field18 : 1;
	unsigned field19 : 1;
	unsigned field20 : 1;
	unsigned field21 : 1;
	unsigned field22 : 1;
	unsigned field23 : 1;
	unsigned field24 : 1;
	unsigned field25 : 1;
	unsigned field26 : 1;
	unsigned field27 : 1;
	unsigned field28 : 1;
} SCD_Struct_GA1;

typedef struct __IOHIDEvent* IOHIDEventRef;

typedef struct {
	unsigned mode;
	unsigned passcodeWindowContextID;
	unsigned voiceOverItemChooserWindowContextID;
	unsigned tripleClickSheetWindowContextID;
	unsigned assistiveTouchPort;
	unsigned profileConfiguration;
	unsigned shouldBlockAllEvents : 1;
	unsigned restartingAndWasActiveBeforeRestart : 1;
	unsigned verifyingDeviceUnlockInSAM : 1;
	unsigned isPasscodeViewVisible : 1;
	unsigned isRestricted : 1;
	unsigned overrideAllowsAllTouchLockscreenUIIsShowing : 1;
	unsigned overrideAllowsAllTouchSBMiniAlertIsShowing : 1;
	unsigned overrideAllowsAllTouchCallStateIsChanging : 1;
	unsigned overrideAllowsAllTouchMakingEmergencyCall : 1;
	unsigned overrideIgnoresAllTouchWhitelistedAppNotFound : 1;
	unsigned overrideIgnoresAllTouchVerifyingIntegrity : 1;
	unsigned whitelistedLockscreenUIIsShowing : 1;
	unsigned allowsTouch : 1;
	unsigned allowsLockButton : 1;
	unsigned allowsAppExit : 1;
	unsigned allowsHomeButton : 1;
	unsigned allowsVolumeButtons : 1;
	unsigned allowsRingerSwitch : 1;
	unsigned allowsMotion : 1;
	unsigned allowsAutolock : 1;
	unsigned allowsKeyboardTextInput : 1;
	unsigned allowsProximity : 1;
} SCD_Struct_GA3;

typedef struct {
	unsigned field1[8];
} SCD_Struct_GA4;

