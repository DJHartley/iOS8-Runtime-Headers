/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class _UIContentUnavailableView, <ABMembersControllerDelegate>, UISearchDisplayController, UITableViewController, UISearchController, UITableView, UIViewController, ABMembersDataSource, <ABMembersControllerSearchCompletionDelegate>, UISearchBar, NSString, <ABStyleProvider>, NSOperationQueue, ABMembersFilteredDataSource, _UINavigationControllerPalette, NSIndexPath;

@interface ABMembersController : ABContentController <UISearchControllerDelegate, UISearchResultsUpdating, ABMembersDataSourceDelegate, UITextFieldDelegate, UISearchDisplayDelegate, ABSearchOperationDelegate, UISearchBarDelegate> {
    ABMembersDataSource *_membersDataSource;
    ABMembersFilteredDataSource *_searchDataSource;
    <ABStyleProvider> *_styleProvider;
    unsigned long long _cellsCreated;
    unsigned long long _memberCount;
    UITableView *_tableView;
    UISearchController *_searchController;
    UISearchDisplayController *_searchDisplayController;
    UITableViewController *_searchResultsController;
    _UIContentUnavailableView *_contentUnavailableView;
    UIViewController *_parentViewController;
    unsigned long long _searchSequenceNumber;
    NSOperationQueue *_operationQueue;
    <ABMembersControllerDelegate> *_membersControllerDelegate;
    bool_showingCardFromSearch;
    bool_shouldDeactivateSearch;
    NSIndexPath *_selectedIndexPath;
    bool_searchEnabled;
    bool_needToClearOldResults;
    long long _initiallyVisibleRow;
    <ABMembersControllerSearchCompletionDelegate> *_searchCompletionDelegate;
    _UINavigationControllerPalette *_searchPalette;
}

@property(getter=isSearchEnabled) bool searchEnabled;
@property(retain) <ABStyleProvider> * styleProvider;
@property <ABMembersControllerDelegate> * membersControllerDelegate;
@property(readonly) UITableView * searchResultsTableView;
@property <ABMembersControllerSearchCompletionDelegate> * searchCompletionDelegate;
@property(readonly) bool isServerSearchGroup;
@property(readonly) NSString * currentSearchText;
@property(readonly) UITableView * currentTableView;
@property(readonly) UISearchBar * searchBar;
@property(retain) _UINavigationControllerPalette * searchPalette;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)newNameSearchOperationWithString:(id)arg1 contactsFilter:(id)arg2 addressBook:(void*)arg3 delegate:(id)arg4 inOutSequenceNumber:(unsigned long long*)arg5;

- (void)setSearchEnabled:(bool)arg1;
- (void)setSearchCompletionDelegate:(id)arg1;
- (id)searchCompletionDelegate;
- (bool)isSearchEnabled;
- (void)_deselectAllRowsWithAnimation;
- (void)displayedMembersListChanged;
- (void)setBannerTitle:(id)arg1 value:(id)arg2;
- (id)_localizedStringForError:(int)arg1;
- (id)__searchController;
- (id)__searchBar;
- (void)cancelSearching:(id)arg1;
- (void)resetStateForDisplayedFilterChange;
- (id)selectedCell;
- (void)setCellsCreated:(unsigned long long)arg1;
- (unsigned long long)cellsCreated;
- (void)scrollMemberToTop:(void*)arg1;
- (void)stopScrolling;
- (void)setMembersControllerDelegate:(id)arg1;
- (void)abScrollViewDidBeginDragging:(id)arg1;
- (bool)abDataSource:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
- (bool)abDataSourceAllowsShowingPersonsCards:(id)arg1;
- (bool)abDataSource:(id)arg1 selectedPerson:(void*)arg2 atIndexPath:(id)arg3 withMemberCell:(id)arg4 animate:(bool)arg5;
- (void)_updateNoContactsViewAnimated:(bool)arg1;
- (bool)showCardForPerson:(void*)arg1 withMemberCell:(id)arg2 animate:(bool)arg3;
- (void)_updateCountString;
- (bool)selectAndScrollMemberVisible:(void*)arg1;
- (void*)_selectedPerson;
- (void)_searchForWords:(id)arg1;
- (id)currentSearchText;
- (void)reloadSearchTableView;
- (bool)isServerSearchGroup;
- (void)_cancelGALSearch;
- (void)cancelSearchingAnimated:(bool)arg1;
- (bool)shouldShowGroups;
- (id)currentTableView;
- (void)_updateEmptyTableViewAnimated:(bool)arg1;
- (void)_reselectLastSelectedCellIfNeeded;
- (void)_scrollIndexToTop:(long long)arg1;
- (id)tableViewPathToMember:(void*)arg1;
- (long long)globalIndexOfMember:(void*)arg1;
- (id)searchDataSource;
- (id)membersDataSource;
- (void)_updateRowsHeights;
- (id)contactsFilter;
- (id)membersControllerDelegate;
- (bool)isSearching;
- (void)_applyStylesToTableView:(id)arg1;
- (void)_setSelectedIndexPath:(id)arg1;
- (void)_reloadFontSizes;
- (void)deselectAllRowsWithAnimation:(bool)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (void)reload;
- (void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(bool)arg3;
- (void)setAddressBook:(void*)arg1;
- (id)initWithAddressBook:(void*)arg1;
- (id)contentView;
- (void)dealloc;
- (id)operationQueue;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
- (id)searchPalette;
- (void)setSearchPalette:(id)arg1;
- (bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (bool)_shouldDeactivateOnCancelButtonClicked;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (id)searchResultsTableView;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (id)tableView;
- (bool)shouldShowIndex;
- (id)searchBar;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)setParentViewController:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
