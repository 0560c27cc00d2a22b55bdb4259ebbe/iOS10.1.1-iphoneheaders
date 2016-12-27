/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSSet, NSString;

@interface CLSEKCalendar : NSObject <NSCoding> {

	BOOL _hasSharees;
	NSSet* _shareesAndOwner;
	NSString* _calendarIdentifier;

}

@property (readonly) NSString * calendarIdentifier;              //@synthesize calendarIdentifier=_calendarIdentifier - In the implementation block
@property (readonly) BOOL hasSharees;                            //@synthesize hasSharees=_hasSharees - In the implementation block
@property (readonly) NSSet * shareesAndOwner;                    //@synthesize shareesAndOwner=_shareesAndOwner - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)calendarIdentifier;
-(BOOL)hasSharees;
-(NSSet *)shareesAndOwner;
-(id)initWithEKCalendar:(id)arg1 ;
@end

