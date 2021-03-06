/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogAccounting/PLAccountingEventEntry.h>

@class NSSet, NSNumber;

@interface PLAccountingQualificationEventEntry : PLAccountingEventEntry {

	NSSet* _childNodeIDs;

}

@property (nonatomic,readonly) NSNumber * qualificationID; 
@property (nonatomic,readonly) NSSet * childNodeIDs;                    //@synthesize childNodeIDs=_childNodeIDs - In the implementation block
@property (nonatomic,readonly) NSSet * childNodeNames; 
+(void)load;
-(id)subEntryKey;
-(int)instanceDirectionality;
-(BOOL)isEqualContentsWithEvent:(id)arg1 ;
-(BOOL)isEmptyEvent;
-(id)initWithQualificationID:(id)arg1 withChildNodeIDs:(id)arg2 withRange:(id)arg3 ;
-(NSNumber *)qualificationID;
-(id)initWithQualificationID:(id)arg1 withChildNodeNames:(id)arg2 withRange:(id)arg3 ;
-(NSSet *)childNodeNames;
-(NSSet *)childNodeIDs;
@end

