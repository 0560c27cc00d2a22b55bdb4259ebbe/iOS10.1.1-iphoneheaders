/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSString, NSNumber;

@interface ASMovedItem : ASItem {

	NSString* _srcMsgId;
	NSNumber* _status;
	NSString* _dstMsgId;

}
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)status;
-(void)setStatus:(id)arg1 ;
-(id)srcMsgId;
-(id)dstMsgId;
-(void)setDstMsgId:(id)arg1 ;
-(void)setSrcMsgId:(id)arg1 ;
@end

