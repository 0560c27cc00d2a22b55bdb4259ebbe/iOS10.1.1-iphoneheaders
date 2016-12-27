/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SUConcernItem : NSObject {

	BOOL _default;
	NSString* _identifier;
	NSString* _title;

}

@property (assign,getter=isDefaultConcern,nonatomic) BOOL defaultConcern;              //@synthesize default=_default - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * title;                                         //@synthesize title=_title - In the implementation block
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)isDefaultConcern;
-(void)setDefaultConcern:(BOOL)arg1 ;
@end
