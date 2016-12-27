/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSDate;

@interface WBSRemoteHistoryVisit : NSObject <NSSecureCoding> {

	NSURL* _url;
	NSDate* _date;

}

@property (nonatomic,readonly) NSURL * url;                //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSDate * date;              //@synthesize date=_date - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSURL *)url;
-(NSDate *)date;
-(id)initWithURL:(id)arg1 date:(id)arg2 ;
@end

