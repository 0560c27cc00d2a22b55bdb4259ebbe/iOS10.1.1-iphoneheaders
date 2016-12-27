/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCModifyRecordsCommand.h>

@class NSArray;

@interface FCModifyHistoryCommand : FCModifyRecordsCommand {

	NSArray* _historyItems;
	NSArray* _recordItems;

}

@property (nonatomic,copy,readonly) NSArray * historyItems;              //@synthesize historyItems=_historyItems - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recordItems;               //@synthesize recordItems=_recordItems - In the implementation block
+(id)desiredKeys;
-(id)initWithHistoryItems:(id)arg1 merge:(BOOL)arg2 ;
-(id)recordZoneName;
-(BOOL)mergeLocalRecord:(id)arg1 withRemoteRecord:(id)arg2 ;
-(NSArray *)historyItems;
-(NSArray *)recordItems;
@end

