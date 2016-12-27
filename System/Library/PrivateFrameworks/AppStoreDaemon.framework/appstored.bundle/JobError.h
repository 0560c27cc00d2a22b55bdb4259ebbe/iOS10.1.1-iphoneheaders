/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/appstored-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableOrderedSet, NSString, NSOrderedSet;

@interface JobError : NSObject <NSCopying> {

	NSMutableOrderedSet* _downloadIdentifiers;
	NSString* _downloadKind;
	NSString* _downloadTitle;
	NSMutableOrderedSet* _jobIdentifiers;
	id _notification;

}

@property (setter=_setNotification:,getter=_notification,nonatomic,retain) id _notification;              //@synthesize notification=_notification - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * downloadIdentifiers; 
@property (nonatomic,readonly) NSOrderedSet * jobIdentifiers;                                             //@synthesize jobIdentifiers=_jobIdentifiers - In the implementation block
@property (nonatomic,copy) NSString * downloadKind;                                                       //@synthesize downloadKind=_downloadKind - In the implementation block
@property (nonatomic,copy) NSString * downloadTitle;                                                      //@synthesize downloadTitle=_downloadTitle - In the implementation block
@property (getter=isValidError,nonatomic,readonly) BOOL validError; 
-(void)addJobIdentifier:(long long)arg1 ;
-(void)addDownloadIdentifier:(long long)arg1 ;
-(void)setDownloadTitle:(NSString *)arg1 ;
-(BOOL)canCoalesceWithError:(id)arg1 ;
-(void)performActionForResponseFlags:(unsigned long long)arg1 ;
-(void)addDownloadIdentifiers:(id)arg1 ;
-(void)addJobIdentifiers:(id)arg1 ;
-(BOOL)isValidError;
-(void)removeDownloadIdentifier:(long long)arg1 ;
-(void)removeJobIdentifier:(long long)arg1 ;
-(BOOL)representsDownloadWithIdentifier:(long long)arg1 ;
-(BOOL)representsJobWithIdentifier:(long long)arg1 ;
-(void)_setNotification:(id)arg1 ;
-(NSOrderedSet *)jobIdentifiers;
-(NSString *)downloadTitle;
-(NSString *)downloadKind;
-(void)setDownloadKind:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copyUserNotification;
-(id)_notification;
-(NSOrderedSet *)downloadIdentifiers;
@end

