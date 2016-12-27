/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSNumber, NSString;

@interface ASResolveRecipientsAvailabilityItem : ASItem {

	NSNumber* _easStatus;
	NSString* _mergedFreeBusy;

}

@property (setter=setEASStatus:,nonatomic,retain) NSNumber * easStatus;              //@synthesize easStatus=_easStatus - In the implementation block
@property (nonatomic,retain) NSString * mergedFreeBusy;                              //@synthesize mergedFreeBusy=_mergedFreeBusy - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)description;
-(NSNumber *)easStatus;
-(NSString *)mergedFreeBusy;
-(void)setMergedFreeBusy:(NSString *)arg1 ;
-(void)setEASStatus:(id)arg1 ;
@end
