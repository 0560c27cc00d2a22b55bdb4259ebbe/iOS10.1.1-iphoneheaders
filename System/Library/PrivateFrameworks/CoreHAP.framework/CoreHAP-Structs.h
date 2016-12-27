/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct PairingSessionPrivate* PairingSessionPrivateRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct _NSZone* NSZoneRef;

typedef struct BonjourBrowser* BonjourBrowserRef;

typedef struct HTTPClientPrivate* HTTPClientPrivateRef;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct BTStatus {
	unsigned long long leRemote;
	unsigned long long leAcc;
	unsigned long long btKB;
	unsigned long long a2dp;
	unsigned long long btGC;
	unsigned long long eAcc;
	unsigned long long hk;
	unsigned long long lowEnergyConnections;
	unsigned long long nonHIDConnections;
	unsigned long long connectedHIDDevices;
	unsigned long long oneSniffAttemptDevices;
	unsigned long long twoSniffAttemptDevices;
	unsigned long long sco;
	unsigned long long wiap;
	unsigned long long remote;
	unsigned long long connectedDevices;
	BOOL isScanning;
	BOOL isDiscoverable;
	BOOL isConnectable;
} BTStatus;

