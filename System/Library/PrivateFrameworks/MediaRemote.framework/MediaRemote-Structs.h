/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned gain : 1;
} SCD_Struct_MR1;

typedef struct {
	unsigned duration : 1;
	unsigned elapsedTime : 1;
	unsigned radioStationIdentifier : 1;
	unsigned timestamp : 1;
	unsigned uniqueIdentifier : 1;
	unsigned playbackRate : 1;
	unsigned repeatMode : 1;
	unsigned shuffleMode : 1;
	unsigned isAdvertisement : 1;
	unsigned isAlwaysLive : 1;
	unsigned isExplicitTrack : 1;
	unsigned isMusicApp : 1;
} SCD_Struct_MR2;

typedef struct {
	unsigned sampleRate : 1;
	unsigned timestamp : 1;
} SCD_Struct_MR3;

typedef struct {
	double x;
	double y;
	double z;
} SCD_Struct_MR4;

typedef struct {
	float buttonA;
	float buttonX;
	float buttonPause;
} SCD_Struct_MR5;

typedef struct {
	float x;
	float y;
	BOOL touchDown;
	unsigned long long timestamp;
} SCD_Struct_MR6;

typedef struct {
	SCD_Struct_MR5 buttons;
	float dpadX;
	float dpadY;
	float buttonB;
	float buttonY;
	float leftShoulder;
	float rightShoulder;
	float leftThumbstickX;
	float leftThumbstickY;
	float rightThumbstickX;
	float rightThumbstickY;
	float leftTrigger;
	float rightTrigger;
} SCD_Struct_MR7;

typedef struct {
	SCD_Struct_MR4 gravity;
	SCD_Struct_MR4 userAcceleration;
} SCD_Struct_MR8;

typedef struct {
	int type;
	/*function pointer*/void* ;
	SCD_Struct_MR8 motion;
	SCD_Struct_MR5 buttons;
	SCD_Struct_MR7 extendedButtons;
	SCD_Struct_MR6) digitizer;
} SCD_Struct_MR9;

typedef struct {
	int( field1;
	/*function pointer*/void* field2;
	= field3;
	SCD_Struct_MR5 field4;
	SCD_Struct_MR6 field5;
	SCD_Struct_MR7 field6;
	SCD_Struct_MR8) field7;
} SCD_Struct_MR10;

typedef struct {
	unsigned list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_MR11;

typedef struct {
	unsigned maximumPacketSize : 1;
	unsigned packetCapacity : 1;
	unsigned packetCount : 1;
} SCD_Struct_MR12;

typedef struct {
	double field1;
	double field2;
} SCD_Struct_MR13;

typedef struct _MROrigin* MROriginRef;

typedef struct __IOHIDEvent* IOHIDEventRef;

typedef struct {
	unsigned screenSizeHeight : 1;
	unsigned screenSizeWidth : 1;
	unsigned absolute : 1;
	unsigned integratedDisplay : 1;
} SCD_Struct_MR16;

typedef struct {
	unsigned artworkHeight : 1;
	unsigned artworkWidth : 1;
	unsigned length : 1;
	unsigned location : 1;
	unsigned includeMetadata : 1;
} SCD_Struct_MR17;

typedef struct PairingSessionPrivate* PairingSessionPrivateRef;

typedef struct {
	void context;
	/*function pointer*/void* showSetupCode_f;
	/*function pointer*/void* hideSetupCode_f;
	/*function pointer*/void* promptForSetupCode_f;
	/*function pointer*/void* copyIdentity_f;
	/*function pointer*/void* findPeer_f;
	/*function pointer*/void* savePeer_f;
	/*function pointer*/void* resumeRequest_f;
	/*function pointer*/void* resumeResponse_f;
} SCD_Struct_MR19;

typedef struct {
	long long location;
	long long length;
} SCD_Struct_MR20;

typedef struct {
	double timestamp;
	double sampleRate;
} SCD_Struct_MR21;

typedef struct MRMediaRemoteService* MRMediaRemoteServiceRef;

typedef struct {
	double list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_MR23;

typedef struct {
	float list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_MR24;

typedef struct {
	SCD_Struct_MR2 field1;
	0 field2;
	BOOL field3;
	double field4;
	double field5;
} SCD_Struct_MR25;

typedef struct {
	unsigned playbackPosition : 1;
	unsigned radioStationID : 1;
	unsigned trackID : 1;
	unsigned playbackQueueInsertionPosition : 1;
	unsigned playbackRate : 1;
	unsigned rating : 1;
	unsigned repeatMode : 1;
	unsigned sendOptions : 1;
	unsigned shuffleMode : 1;
	unsigned skipInterval : 1;
	unsigned externalPlayerCommand : 1;
	unsigned negative : 1;
	unsigned requestDefermentToPlaybackQueuePosition : 1;
	unsigned shouldBeginRadioPlayback : 1;
	unsigned shouldOverrideManuallyCuratedQueue : 1;
} SCD_Struct_MR26;

typedef struct MGNotificationTokenStruct* MGNotificationTokenStructRef;

typedef struct {
	unsigned duration : 1;
	unsigned releaseDate : 1;
	unsigned episodeNumber : 1;
	unsigned playCount : 1;
	unsigned playbackProgress : 1;
	unsigned playlistType : 1;
	unsigned radioStationType : 1;
	unsigned seasonNumber : 1;
	unsigned isContainer : 1;
	unsigned isExplicitItem : 1;
	unsigned isPlayable : 1;
} SCD_Struct_MR28;

typedef struct {
	unsigned long long list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_MR29;

typedef struct {
	unsigned validTextRangeLength : 1;
	unsigned validTextRangeLocation : 1;
	unsigned autocapitalizationType : 1;
	unsigned keyboardType : 1;
	unsigned returnKeyType : 1;
	unsigned autocorrection : 1;
	unsigned enablesReturnKeyAutomatically : 1;
	unsigned secureTextEntry : 1;
	unsigned spellchecking : 1;
} SCD_Struct_MR30;

typedef struct {
	float width;
	float height;
} SCD_Struct_MR31;

typedef union MRHIDSize {
	SCD_Struct_MR31 field1;
	float data[2];
} MRHIDSize;

typedef struct MRTextInputTraits {
	unsigned autocapitalizationType;
	unsigned autocorrectionType;
	unsigned spellcheckingType;
	unsigned keyboardType;
	unsigned returnKeyType;
	SCD_Struct_MR20 validTextRange;
	BOOL enablesReturnKeyAutomatically;
	BOOL secureTextEntry;
	long long PINEntrySeparatorIndexes[10];
	unsigned long long PINEntrySeparatorIndexesCount;
} MRTextInputTraits;

