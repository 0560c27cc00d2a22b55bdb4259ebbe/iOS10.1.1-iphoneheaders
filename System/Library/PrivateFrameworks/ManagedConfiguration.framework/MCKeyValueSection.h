/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface MCKeyValueSection : NSObject {

	NSString* _sectionTitle;
	NSString* _sectionFooter;
	NSArray* _sectionKeyValues;

}

@property (nonatomic,retain) NSString * sectionTitle;                 //@synthesize sectionTitle=_sectionTitle - In the implementation block
@property (nonatomic,retain) NSString * sectionFooter;                //@synthesize sectionFooter=_sectionFooter - In the implementation block
@property (nonatomic,retain) NSArray * sectionKeyValues;              //@synthesize sectionKeyValues=_sectionKeyValues - In the implementation block
+(id)sectionWithLocalizedArray:(id)arg1 title:(id)arg2 footer:(id)arg3 ;
+(id)sectionWithKeyValues:(id)arg1 ;
-(id)initWithSectionTitle:(id)arg1 footer:(id)arg2 keyValues:(id)arg3 ;
-(NSString *)sectionFooter;
-(void)setSectionFooter:(NSString *)arg1 ;
-(NSArray *)sectionKeyValues;
-(void)setSectionKeyValues:(NSArray *)arg1 ;
-(void)setSectionTitle:(NSString *)arg1 ;
-(NSString *)sectionTitle;
@end

