/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFTranscriptionType.h>

@class NSString, NSArray;

@interface AFPhonemeTranscription : NSObject <AFTranscriptionType> {

	NSString* _orthography;
	NSString* _language;
	NSArray* _phonemeSuggestions;

}

@property (nonatomic,retain) NSString * orthography;                    //@synthesize orthography=_orthography - In the implementation block
@property (nonatomic,retain) NSString * language;                       //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) NSArray * phonemeSuggestions;              //@synthesize phonemeSuggestions=_phonemeSuggestions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)orthography;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setOrthography:(NSString *)arg1 ;
-(NSArray *)phonemeSuggestions;
-(void)setPhonemeSuggestions:(NSArray *)arg1 ;
@end
