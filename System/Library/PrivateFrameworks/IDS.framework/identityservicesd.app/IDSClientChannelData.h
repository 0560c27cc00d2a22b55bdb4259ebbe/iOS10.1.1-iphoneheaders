/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <identityservicesd/identityservicesd-Structs.h>
@class NSData;

@interface IDSClientChannelData : NSObject {

	NSData* _metadataData;
	unsigned _metadataSize;
	SCD_Struct_ID11* _packetBuffer;
	const char* _metadata;

}

@property (nonatomic,readonly) SCD_Struct_ID11* packetBuffer;              //@synthesize packetBuffer=_packetBuffer - In the implementation block
@property (nonatomic,readonly) const char* metadata;                       //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) unsigned metadataSize;                      //@synthesize metadataSize=_metadataSize - In the implementation block
-(id)initWithPacketBuffer:(SCD_Struct_ID11*)arg1 metadata:(const char*)arg2 metadataSize:(unsigned)arg3 ;
-(SCD_Struct_ID11*)packetBuffer;
-(unsigned)metadataSize;
-(void)dealloc;
-(const char*)metadata;
@end
