/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableDictionary, NSString;

@interface SUViewControllerContext : NSObject <NSCoding> {

	NSMutableDictionary* _metadata;
	NSString* _sectionIdentifier;
	long long _type;

}

@property (nonatomic,retain) NSString * sectionIdentifier;              //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (assign,nonatomic) long long type;                            //@synthesize type=_type - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(id)copyViewController;
-(void)setValue:(id)arg1 forMetadataKey:(id)arg2 ;
-(void)setSectionIdentifier:(NSString *)arg1 ;
-(long long)_typeForTypeString:(id)arg1 ;
-(id)_typeStringForType:(long long)arg1 ;
-(id)valueForMetadataKey:(id)arg1 ;
-(NSString *)sectionIdentifier;
@end

