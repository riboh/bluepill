//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SimPasteboardItem.h"

#import "SimPasteboardItemDataProvider-Protocol.h"

@class NSString;

@interface SimNSPasteboardItem : SimPasteboardItem <SimPasteboardItemDataProvider>
{
}

- (id)retrieveValueForSimPasteboardItem:(id)arg1 type:(id)arg2;
- (id)nsPasteboardRepresentation;
- (id)initWithNSPasteboardItem:(id)arg1 resolvedCount:(long long)arg2;

// Remaining properties
//@property(readonly, copy) NSString *debugDescription;
//@property(readonly, copy) NSString *description;
//@property(readonly) unsigned long long hash;
//@property(readonly) Class superclass;

@end

