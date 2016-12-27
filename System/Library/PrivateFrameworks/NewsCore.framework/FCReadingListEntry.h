/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface FCReadingListEntry : NSObject {

	NSString* _identifier;
	NSString* _articleID;
	NSDate* _dateAdded;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * articleID;               //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,readonly) NSDate * dateAdded;                      //@synthesize dateAdded=_dateAdded - In the implementation block
-(NSString *)identifier;
-(id)dictionaryRepresentation;
-(NSDate *)dateAdded;
-(NSString *)articleID;
-(id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2 ;
-(id)initWithEntryID:(id)arg1 articleID:(id)arg2 dateAdded:(id)arg3 ;
@end

