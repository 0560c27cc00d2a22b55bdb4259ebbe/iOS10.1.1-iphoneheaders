/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_EARWordPart_JSExport.h>

@class NSString, NSSet;

@interface _EARWordPart : NSObject <_EARWordPart_JSExport> {

	NSString* _tagName;
	NSString* _orthography;
	long long _tag;
	unsigned long long _frequency;
	NSSet* _pronunciations;

}

@property (nonatomic,readonly) NSString * orthography;                    //@synthesize orthography=_orthography - In the implementation block
@property (nonatomic,readonly) long long tag;                             //@synthesize tag=_tag - In the implementation block
@property (nonatomic,readonly) NSString * tagName; 
@property (nonatomic,readonly) unsigned long long frequency;              //@synthesize frequency=_frequency - In the implementation block
@property (nonatomic,readonly) NSSet * pronunciations;                    //@synthesize pronunciations=_pronunciations - In the implementation block
-(NSString *)orthography;
-(long long)tag;
-(NSString *)tagName;
-(unsigned long long)frequency;
-(NSSet *)pronunciations;
-(id)getOrthography;
-(id)getTagName;
-(id)getPronuncations;
-(id)initWithOrthography:(id)arg1 pronunciations:(id)arg2 tag:(long long)arg3 ;
-(id)initWithOrthography:(id)arg1 pronunciations:(id)arg2 tagName:(id)arg3 frequency:(unsigned long long)arg4 ;
@end

