/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface _CNAutocompleteObservableBuilderBatchingHelper : NSObject {

	NSArray* _batches;

}

@property (nonatomic,readonly) NSArray * batches;              //@synthesize batches=_batches - In the implementation block
-(id)initWithBatchCount:(unsigned long long)arg1 ;
-(id)batchedObservables;
-(void)addObservable:(id)arg1 toBatchAtIndex:(unsigned long long)arg2 ;
-(NSArray *)batches;
@end

