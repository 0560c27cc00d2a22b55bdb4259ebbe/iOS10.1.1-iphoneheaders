/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSDictionary;

@interface HAPWACScannerIEUtility : NSObject {

	NSData* _ieData;
	const char* _iePtr;
	const char* _src;
	const char* _end;
	const char* _ptr;
	unsigned long long _len;
	BOOL _supportsLegacyHomeKit;
	BOOL _supportsHomeKit;
	BOOL _supportsMFi;
	BOOL _supportsSTAOnly;
	BOOL _supportsAudioOnly;
	BOOL _supports2pt4GHzNetworks;
	BOOL _supports5GHzNetworks;

}

@property (copy,readonly) NSDictionary * setupDictionary; 
@property (nonatomic,readonly) BOOL supportsLegacyHomeKit;                //@synthesize supportsLegacyHomeKit=_supportsLegacyHomeKit - In the implementation block
@property (nonatomic,readonly) BOOL supportsHomeKit;                      //@synthesize supportsHomeKit=_supportsHomeKit - In the implementation block
@property (nonatomic,readonly) BOOL supportsMFi;                          //@synthesize supportsMFi=_supportsMFi - In the implementation block
@property (nonatomic,readonly) BOOL supportsSTAOnly;                      //@synthesize supportsSTAOnly=_supportsSTAOnly - In the implementation block
@property (nonatomic,readonly) BOOL supportsAudioOnly;                    //@synthesize supportsAudioOnly=_supportsAudioOnly - In the implementation block
@property (nonatomic,readonly) BOOL supports2pt4GHzNetworks;              //@synthesize supports2pt4GHzNetworks=_supports2pt4GHzNetworks - In the implementation block
@property (nonatomic,readonly) BOOL supports5GHzNetworks;                 //@synthesize supports5GHzNetworks=_supports5GHzNetworks - In the implementation block
-(void)dealloc;
-(BOOL)supports2pt4GHzNetworks;
-(BOOL)supports5GHzNetworks;
-(id)initWithIEData:(id)arg1 ;
-(NSDictionary *)setupDictionary;
-(BOOL)supportsLegacyHomeKit;
-(BOOL)supportsHomeKit;
-(BOOL)supportsMFi;
-(BOOL)supportsSTAOnly;
-(BOOL)supportsAudioOnly;
@end

