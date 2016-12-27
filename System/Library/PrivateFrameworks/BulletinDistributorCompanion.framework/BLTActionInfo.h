/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, NSDictionary;

@interface BLTActionInfo : NSObject <BSDescriptionProviding> {

	long long _actionType;
	NSString* _publisherBulletinID;
	NSString* _recordID;
	NSString* _sectionID;
	NSDictionary* _context;

}

@property (assign,nonatomic) long long actionType;                      //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy) NSString * publisherBulletinID;              //@synthesize publisherBulletinID=_publisherBulletinID - In the implementation block
@property (nonatomic,copy) NSString * recordID;                         //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,copy) NSString * sectionID;                        //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,retain) NSDictionary * context;                    //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSDictionary *)context;
-(NSString *)sectionID;
-(void)setContext:(NSDictionary *)arg1 ;
-(void)setSectionID:(NSString *)arg1 ;
-(NSString *)recordID;
-(void)setActionType:(long long)arg1 ;
-(NSString *)publisherBulletinID;
-(long long)actionType;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithActionType:(long long)arg1 publisherBulletinID:(id)arg2 recordID:(id)arg3 sectionID:(id)arg4 context:(id)arg5 ;
-(void)setRecordID:(NSString *)arg1 ;
-(void)setPublisherBulletinID:(NSString *)arg1 ;
@end

