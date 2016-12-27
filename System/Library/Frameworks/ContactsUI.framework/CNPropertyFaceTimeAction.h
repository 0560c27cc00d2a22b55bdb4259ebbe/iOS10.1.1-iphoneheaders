/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyAction.h>
#import <libobjc.A.dylib/CNPropertyBestIDSValueQueryDelegate.h>

@class CNPropertyBestIDSValueQuery;

@interface CNPropertyFaceTimeAction : CNPropertyAction <CNPropertyBestIDSValueQueryDelegate> {

	long long _type;
	CNPropertyBestIDSValueQuery* _bestFaceTimeQuery;

}

@property (nonatomic,retain) CNPropertyBestIDSValueQuery * bestFaceTimeQuery;              //@synthesize bestFaceTimeQuery=_bestFaceTimeQuery - In the implementation block
@property (assign,nonatomic) long long type;                                               //@synthesize type=_type - In the implementation block
-(void)dealloc;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)performActionForItem:(id)arg1 sender:(id)arg2 ;
-(id)initWithContact:(id)arg1 propertyItems:(id)arg2 ;
-(BOOL)canPerformAction;
-(void)_queryFaceTimeStatus;
-(CNPropertyBestIDSValueQuery *)bestFaceTimeQuery;
-(void)setBestFaceTimeQuery:(CNPropertyBestIDSValueQuery *)arg1 ;
-(void)queryComplete;
@end

