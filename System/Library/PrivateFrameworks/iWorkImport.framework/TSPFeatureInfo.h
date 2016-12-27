/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TSPFeatureInfo : NSObject {

	NSString* _identifier;
	unsigned long long _readVersion;
	unsigned long long _writeVersion;

}

@property (nonatomic,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long readVersion;               //@synthesize readVersion=_readVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long writeVersion;              //@synthesize writeVersion=_writeVersion - In the implementation block
-(id)initWithIdentifier:(id)arg1 readVersion:(unsigned long long)arg2 writeVersion:(unsigned long long)arg3 fromArchiver:(BOOL)arg4 ;
-(unsigned long long)readVersion;
-(unsigned long long)writeVersion;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
@end

