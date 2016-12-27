/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString, NSSet;

@interface _CDPeopleSuggesterContext : NSObject <NSCopying> {

	NSDate* _date;
	NSString* _locationUUID;
	NSString* _title;
	NSString* _contactPrefix;
	NSSet* _seedContactIdentifiers;
	NSString* _consumerIdentifier;

}

@property (retain) NSDate * date;                               //@synthesize date=_date - In the implementation block
@property (retain) NSString * locationUUID;                     //@synthesize locationUUID=_locationUUID - In the implementation block
@property (retain) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (retain) NSString * contactPrefix;                    //@synthesize contactPrefix=_contactPrefix - In the implementation block
@property (retain) NSSet * seedContactIdentifiers;              //@synthesize seedContactIdentifiers=_seedContactIdentifiers - In the implementation block
@property (retain) NSString * consumerIdentifier;               //@synthesize consumerIdentifier=_consumerIdentifier - In the implementation block
+(id)currentContext;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)contactPrefix;
-(NSString *)consumerIdentifier;
-(NSSet *)seedContactIdentifiers;
-(void)setSeedContactIdentifiers:(NSSet *)arg1 ;
-(void)setConsumerIdentifier:(NSString *)arg1 ;
-(void)setContactPrefix:(NSString *)arg1 ;
-(void)setLocationUUID:(NSString *)arg1 ;
-(NSString *)locationUUID;
@end
