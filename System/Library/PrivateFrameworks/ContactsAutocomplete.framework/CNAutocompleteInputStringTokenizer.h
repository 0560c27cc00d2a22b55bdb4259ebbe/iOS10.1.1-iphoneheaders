/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNFuture;

@interface CNAutocompleteInputStringTokenizer : NSObject {

	CNFuture* _nameStringTokenizer;

}

@property (retain) CNFuture * nameStringTokenizer;              //@synthesize nameStringTokenizer=_nameStringTokenizer - In the implementation block
+(id)lazyNameStringTokenizerWithLocale:(id)arg1 ;
+(id)tokensFromString:(id)arg1 ;
-(id)init;
-(void)setNameStringTokenizer:(CNFuture *)arg1 ;
-(/*^block*/id)expandCJKNames;
-(CNFuture *)nameStringTokenizer;
-(id)tokensFromString:(id)arg1 ;
-(id)initWithLocale:(id)arg1 ;
@end

