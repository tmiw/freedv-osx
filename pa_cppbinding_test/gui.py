# -*- coding: utf-8 -*- 

###########################################################################
## Python code generated with wxFormBuilder (version Mar 17 2012)
## http://www.wxformbuilder.org/
##
## PLEASE DO "NOT" EDIT THIS FILE!
###########################################################################

import wx
import wx.xrc

import gettext
_ = gettext.gettext

###########################################################################
## Class MainFrameBase
###########################################################################

class MainFrameBase ( wx.Frame ):
	
	def __init__( self, parent ):
		wx.Frame.__init__ ( self, parent, id = wx.ID_ANY, title = _(u"Test PortAudio CPP Binding "), pos = wx.DefaultPosition, size = wx.Size( 651,445 ), style = wx.DEFAULT_FRAME_STYLE|wx.RESIZE_BORDER|wx.TAB_TRAVERSAL )
		
		self.SetSizeHintsSz( wx.DefaultSize, wx.DefaultSize )
		
		self.m_menuBar = wx.MenuBar( 0 )
		self.m_menuFile = wx.Menu()
		self.menuFileExit = wx.MenuItem( self.m_menuFile, wx.ID_EXIT, _(u"E&xit")+ u"\t" + u"Alt+X", wx.EmptyString, wx.ITEM_NORMAL )
		self.m_menuFile.AppendItem( self.menuFileExit )
		
		self.m_menuBar.Append( self.m_menuFile, _(u"&File") ) 
		
		self.SetMenuBar( self.m_menuBar )
		
		mainSizer = wx.BoxSizer( wx.VERTICAL )
		
		self.m_audioInfo = wx.Panel( self, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, wx.TAB_TRAVERSAL )
		self.m_audioInfo.SetMinSize( wx.Size( 65,65 ) )
		
		bSizer17 = wx.BoxSizer( wx.VERTICAL )
		
		bSizer151 = wx.BoxSizer( wx.HORIZONTAL )
		
		sbSizerLeft = wx.StaticBoxSizer( wx.StaticBox( self.m_audioInfo, wx.ID_ANY, _(u"label") ), wx.VERTICAL )
		
		m_listBoxTopLeftChoices = []
		self.m_listBoxTopLeft = wx.ListBox( self.m_audioInfo, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, m_listBoxTopLeftChoices, 0 )
		sbSizerLeft.Add( self.m_listBoxTopLeft, 1, wx.ALIGN_CENTER|wx.ALL|wx.EXPAND, 3 )
		
		
		bSizer151.Add( sbSizerLeft, 1, wx.EXPAND, 1 )
		
		sbSizerRight = wx.StaticBoxSizer( wx.StaticBox( self.m_audioInfo, wx.ID_ANY, _(u"label") ), wx.VERTICAL )
		
		self.m_textTopRight = wx.TextCtrl( self.m_audioInfo, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, wx.HSCROLL|wx.TE_DONTWRAP|wx.TE_MULTILINE )
		self.m_textTopRight.SetBackgroundColour( wx.SystemSettings.GetColour( wx.SYS_COLOUR_INACTIVEBORDER ) )
		
		sbSizerRight.Add( self.m_textTopRight, 1, wx.ALIGN_CENTER|wx.ALL|wx.EXPAND, 3 )
		
		
		bSizer151.Add( sbSizerRight, 1, wx.EXPAND, 1 )
		
		
		bSizer17.Add( bSizer151, 1, wx.EXPAND, 5 )
		
		bSizer15 = wx.BoxSizer( wx.HORIZONTAL )
		
		bSizer9 = wx.BoxSizer( wx.VERTICAL )
		
		m_listBoxMidLeftChoices = []
		self.m_listBoxMidLeft = wx.ListBox( self.m_audioInfo, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, m_listBoxMidLeftChoices, 0 )
		bSizer9.Add( self.m_listBoxMidLeft, 1, wx.ALIGN_CENTER|wx.ALL|wx.EXPAND, 5 )
		
		
		bSizer15.Add( bSizer9, 1, wx.ALIGN_CENTER_VERTICAL|wx.EXPAND, 1 )
		
		bSizer18 = wx.BoxSizer( wx.VERTICAL )
		
		m_listBoxMidRightChoices = []
		self.m_listBoxMidRight = wx.ListBox( self.m_audioInfo, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, m_listBoxMidRightChoices, 0 )
		bSizer18.Add( self.m_listBoxMidRight, 1, wx.ALIGN_CENTER|wx.ALL|wx.EXPAND, 5 )
		
		
		bSizer15.Add( bSizer18, 1, wx.EXPAND, 5 )
		
		
		bSizer17.Add( bSizer15, 1, wx.EXPAND, 1 )
		
		bSizer91 = wx.BoxSizer( wx.HORIZONTAL )
		
		bSizer71 = wx.BoxSizer( wx.HORIZONTAL )
		
		m_listBoxBottomLeftChoices = []
		self.m_listBoxBottomLeft = wx.ListBox( self.m_audioInfo, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, m_listBoxBottomLeftChoices, 0 )
		bSizer71.Add( self.m_listBoxBottomLeft, 1, wx.ALIGN_CENTER|wx.ALL|wx.EXPAND, 5 )
		
		
		bSizer91.Add( bSizer71, 1, wx.EXPAND, 5 )
		
		bSizer31 = wx.BoxSizer( wx.HORIZONTAL )
		
		bSizer31.SetMinSize( wx.Size( 65,65 ) ) 
		m_listBoxBottomRightChoices = []
		self.m_listBoxBottomRight = wx.ListBox( self.m_audioInfo, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, m_listBoxBottomRightChoices, 0 )
		bSizer31.Add( self.m_listBoxBottomRight, 1, wx.ALIGN_CENTER|wx.ALL|wx.EXPAND, 5 )
		
		
		bSizer91.Add( bSizer31, 1, wx.EXPAND, 5 )
		
		
		bSizer17.Add( bSizer91, 1, wx.EXPAND, 1 )
		
		bSizer14 = wx.BoxSizer( wx.HORIZONTAL )
		
		bSizer13 = wx.BoxSizer( wx.HORIZONTAL )
		
		bSizer12 = wx.BoxSizer( wx.VERTICAL )
		
		self.m_btnLeft = wx.Button( self.m_audioInfo, wx.ID_ANY, _(u"Ok"), wx.DefaultPosition, wx.DefaultSize, 0 )
		bSizer12.Add( self.m_btnLeft, 0, wx.ALIGN_CENTER_VERTICAL|wx.ALIGN_RIGHT|wx.ALL, 1 )
		
		
		bSizer13.Add( bSizer12, 1, 0, 1 )
		
		bSizer11 = wx.BoxSizer( wx.VERTICAL )
		
		self.m_btnRight = wx.Button( self.m_audioInfo, wx.ID_ANY, _(u"On / Off"), wx.DefaultPosition, wx.DefaultSize, 0 )
		bSizer11.Add( self.m_btnRight, 0, wx.ALIGN_CENTER_VERTICAL|wx.ALIGN_LEFT|wx.ALL, 1 )
		
		
		bSizer13.Add( bSizer11, 1, 0, 1 )
		
		
		bSizer14.Add( bSizer13, 1, wx.ALIGN_BOTTOM|wx.ALIGN_RIGHT, 1 )
		
		
		bSizer17.Add( bSizer14, 0, wx.EXPAND, 5 )
		
		bSizer16 = wx.BoxSizer( wx.VERTICAL )
		
		self.m_button1 = wx.Button( self.m_audioInfo, wx.ID_ANY, _(u"Exit"), wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_button1.SetDefault() 
		bSizer16.Add( self.m_button1, 0, 0, 1 )
		
		
		bSizer17.Add( bSizer16, 0, wx.ALIGN_BOTTOM|wx.ALIGN_RIGHT, 1 )
		
		
		self.m_audioInfo.SetSizer( bSizer17 )
		self.m_audioInfo.Layout()
		bSizer17.Fit( self.m_audioInfo )
		mainSizer.Add( self.m_audioInfo, 1, wx.ALIGN_CENTER|wx.EXPAND, 1 )
		
		
		self.SetSizer( mainSizer )
		self.Layout()
		self.m_statusBar = self.CreateStatusBar( 1, wx.ST_SIZEGRIP, wx.ID_ANY )
		
		self.Centre( wx.BOTH )
		
		# Connect Events
		self.Bind( wx.EVT_CLOSE, self.OnCloseFrame )
		self.Bind( wx.EVT_MENU, self.OnExitClick, id = self.menuFileExit.GetId() )
		self.m_listBoxTopLeft.Bind( wx.EVT_LISTBOX, self.OnListBoxTopLeftBox )
		self.m_listBoxTopLeft.Bind( wx.EVT_LISTBOX_DCLICK, self.OnListBoxTopLeftDClick )
		self.m_listBoxMidLeft.Bind( wx.EVT_LISTBOX, self.OnListMidLeftBoxClick )
		self.m_listBoxMidLeft.Bind( wx.EVT_LISTBOX_DCLICK, self.OnListMidLeftBoxDClick )
		self.m_listBoxMidRight.Bind( wx.EVT_LISTBOX, self.OnListMidRightBoxClick )
		self.m_listBoxMidRight.Bind( wx.EVT_LISTBOX_DCLICK, self.OnListMidRightBoxDClick )
		self.m_listBoxBottomLeft.Bind( wx.EVT_LISTBOX, self.OnListBoxBottomLeftClick )
		self.m_listBoxBottomLeft.Bind( wx.EVT_LISTBOX_DCLICK, self.OnListBoxBottomLeftDClick )
		self.m_listBoxBottomRight.Bind( wx.EVT_LISTBOX, self.OnListBoxBottomRIghtClick )
		self.m_listBoxBottomRight.Bind( wx.EVT_LISTBOX_DCLICK, self.OnListBoxBottomRIghtDClick )
		self.m_btnLeft.Bind( wx.EVT_BUTTON, self.OnBtnLeft )
		self.m_btnRight.Bind( wx.EVT_BUTTON, self.OnBtnRight )
		self.m_button1.Bind( wx.EVT_BUTTON, self.OnExitClick )
	
	def __del__( self ):
		pass
	
	
	# Virtual event handlers, overide them in your derived class
	def OnCloseFrame( self, event ):
		event.Skip()
	
	def OnExitClick( self, event ):
		event.Skip()
	
	def OnListBoxTopLeftBox( self, event ):
		event.Skip()
	
	def OnListBoxTopLeftDClick( self, event ):
		event.Skip()
	
	def OnListMidLeftBoxClick( self, event ):
		event.Skip()
	
	def OnListMidLeftBoxDClick( self, event ):
		event.Skip()
	
	def OnListMidRightBoxClick( self, event ):
		event.Skip()
	
	def OnListMidRightBoxDClick( self, event ):
		event.Skip()
	
	def OnListBoxBottomLeftClick( self, event ):
		event.Skip()
	
	def OnListBoxBottomLeftDClick( self, event ):
		event.Skip()
	
	def OnListBoxBottomRIghtClick( self, event ):
		event.Skip()
	
	def OnListBoxBottomRIghtDClick( self, event ):
		event.Skip()
	
	def OnBtnLeft( self, event ):
		event.Skip()
	
	def OnBtnRight( self, event ):
		event.Skip()
	
	

