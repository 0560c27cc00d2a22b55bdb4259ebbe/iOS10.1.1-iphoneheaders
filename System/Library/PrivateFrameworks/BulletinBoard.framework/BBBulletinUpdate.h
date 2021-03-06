/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class BBBulletin;

@interface BBBulletinUpdate : NSObject <NSCopying, NSSecureCoding> {

	BBBulletin* _bulletin;
	unsigned long long _feeds;

}

@property (nonatomic,copy,readonly) BBBulletin * bulletin;              //@synthesize bulletin=_bulletin - In the implementation block
@property (nonatomic,readonly) unsigned long long feeds;                //@synthesize feeds=_feeds - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)typeDescription;
-(unsigned long long)feeds;
-(id)initWithBulletin:(id)arg1 feeds:(unsigned long long)arg2 ;
-(BBBulletin *)bulletin;
@end

