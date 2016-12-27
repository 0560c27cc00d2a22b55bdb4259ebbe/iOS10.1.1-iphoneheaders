/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSDictionary, NSString, NSNumber;

@interface ASDSoftwareUpdate : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _installDate;
	NSDate* _timestamp;
	NSDictionary* _updateDictionary;
	long long _updateState;

}

@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSNumber * externalVersionIdentifier; 
@property (nonatomic,copy) NSDate * installDate;                                  //@synthesize installDate=_installDate - In the implementation block
@property (nonatomic,readonly) long long parentalControlsRank; 
@property (nonatomic,readonly) long long storeItemIdentifier; 
@property (nonatomic,copy) NSDate * timestamp;                                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) NSDictionary * updateDictionary;                   //@synthesize updateDictionary=_updateDictionary - In the implementation block
@property (assign,nonatomic) long long updateState;                               //@synthesize updateState=_updateState - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)externalVersionIdentifier;
-(id)initWithUpdateDictionary:(id)arg1 ;
-(void)setUpdateState:(long long)arg1 ;
-(void)setInstallDate:(NSDate *)arg1 ;
-(NSDate *)installDate;
-(NSDictionary *)updateDictionary;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(NSString *)bundleIdentifier;
-(void)setTimestamp:(NSDate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)updateState;
-(long long)storeItemIdentifier;
-(long long)parentalControlsRank;
@end

